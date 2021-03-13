const fs = require('fs');
const folderName = process.argv[2] || 'Project'

try {
    fs.mkdirSync(foldername);
    fs.writeFileSync(`${folderName}/rough.html`)
    fs.writeFileSync(`${folderName}/rough.js`)
    fs.writeFileSync(`${folderName}/rough.css`)
}
catch (e) {
    console.log(e);
}