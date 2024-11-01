document.getElementById('generateBtn').addEventListener('click', function() {
    const count = parseInt(document.getElementById('checkboxCount').value);
    const container = document.getElementById('checkboxContainer');
    container.innerHTML = ''; // Limpa checkboxes anteriores

    for (let i = 0; i < count; i++) {
        const checkboxLabel = document.createElement('label');
        checkboxLabel.innerHTML = `<input type="checkbox" class="checkbox" value="Checkbox ${i + 1}"> Checkbox ${i + 1}`;
        container.appendChild(checkboxLabel);
    }
});

document.getElementById('copyBtn').addEventListener('click', function() {
    const selectedCheckboxes = document.querySelectorAll('.checkbox:checked');
    const selectedText = Array.from(selectedCheckboxes).map(checkbox => checkbox.value).join('\n');

    const outputDiv = document.getElementById('selectedText');
    outputDiv.innerText = selectedText;

    navigator.clipboard.writeText(selectedText)
});
